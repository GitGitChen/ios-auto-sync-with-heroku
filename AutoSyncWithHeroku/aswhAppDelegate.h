//
//  aswhAppDelegate.h
//  AutoSyncWithHeroku
//
//  Created by Andrew Roin on 4/21/13.
//  Copyright (c) 2013 Andrew Roin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AutoSyncWithHerokuIncrementalStore.h"

@interface aswhAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;

@property (strong, nonatomic) UINavigationController *navigationController;

@end
