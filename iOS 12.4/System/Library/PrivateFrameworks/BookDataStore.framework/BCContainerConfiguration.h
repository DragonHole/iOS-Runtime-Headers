/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol BCContainerConfiguration <NSObject>
@property (nonatomic,readonly) NSString * queueIdentifier; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) NSArray * appZones; 
@property (nonatomic,readonly) NSArray * serviceZones; 
@property (nonatomic,readonly) NSString * dbArchiveFolderName; 
@property (nonatomic,readonly) NSString * dbArchiveExtension; 
@property (nonatomic,readonly) NSString * dbArchiveFilename; 
@property (nonatomic,readonly) NSString * dbSubscriptionID; 
@property (nonatomic,readonly) BOOL requiresDeviceToDeviceEncryption; 
@required
+(id)configuration;
-(NSString *)queueIdentifier;
-(BOOL)requiresDeviceToDeviceEncryption;
-(NSString *)containerIdentifier;
-(NSArray *)appZones;
-(NSArray *)serviceZones;
-(NSString *)dbArchiveFolderName;
-(NSString *)dbArchiveExtension;
-(NSString *)dbArchiveFilename;
-(NSString *)dbSubscriptionID;

@end
