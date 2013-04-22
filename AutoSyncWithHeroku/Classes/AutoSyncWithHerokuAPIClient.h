#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface AutoSyncWithHerokuAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (AutoSyncWithHerokuAPIClient *)sharedClient;

@end
