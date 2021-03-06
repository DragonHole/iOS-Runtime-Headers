/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSArray, NSNumber, NSString, NSURL;

@interface AAUIQuotaResponse : AAResponse {

	NSDictionary* _quotaInfo;
	NSArray* _usage;
	NSDictionary* _endPoints;
	NSDictionary* _storageInfo;
	NSDictionary* _storageMeterLabel;

}

@property (nonatomic,readonly) NSNumber * availableStorageInBytes; 
@property (nonatomic,readonly) NSNumber * usedStorageInBytes; 
@property (nonatomic,readonly) NSNumber * totalStorageInBytes; 
@property (nonatomic,readonly) NSArray * usage; 
@property (nonatomic,readonly) NSArray * iCloudMediaUsage; 
@property (nonatomic,readonly) BOOL hasMaxTier; 
@property (nonatomic,readonly) NSString * displayLabel; 
@property (nonatomic,readonly) NSURL * manageStorageURL; 
@property (nonatomic,readonly) NSNumber * totalStorageInByes; 
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSNumber *)totalStorageInBytes;
-(NSArray *)iCloudMediaUsage;
-(NSNumber *)totalStorageInByes;
-(NSNumber *)usedStorageInBytes;
-(NSNumber *)availableStorageInBytes;
-(BOOL)hasMaxTier;
-(NSURL *)manageStorageURL;
-(NSString *)displayLabel;
-(NSArray *)usage;
@end

