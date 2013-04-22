#import "AutoSyncWithHerokuIncrementalStore.h"
#import "AutoSyncWithHerokuAPIClient.h"

@implementation AutoSyncWithHerokuIncrementalStore

+ (void)initialize {
    [NSPersistentStoreCoordinator registerStoreClass:self forStoreType:[self type]];
}

+ (NSString *)type {
    return NSStringFromClass(self);
}

+ (NSManagedObjectModel *)model {
    return [[NSManagedObjectModel alloc] initWithContentsOfURL:[[NSBundle mainBundle] URLForResource:@"AutoSyncWithHeroku" withExtension:@"xcdatamodeld"]];
}

- (id <AFIncrementalStoreHTTPClient>)HTTPClient {
    return [AutoSyncWithHerokuAPIClient sharedClient];
}

@end