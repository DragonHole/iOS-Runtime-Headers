/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface CKSharedDatabase : NSObject {

	NSManagedObjectContext* _mainManagedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,retain) NSManagedObjectContext * mainManagedObjectContext;                      //@synthesize mainManagedObjectContext=_mainManagedObjectContext - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
+(id)databaseURL;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)urlForDataModel;
-(NSManagedObjectContext *)mainManagedObjectContext;
-(void)setMainManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)newManagedObjectContext;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
@end
