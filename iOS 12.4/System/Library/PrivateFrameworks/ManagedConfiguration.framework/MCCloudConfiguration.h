/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface MCCloudConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSDictionary* _memberQueueDetails;
	NSDictionary* _memberQueueSetAsideDetails;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;               //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueDetails;                      //@synthesize memberQueueDetails=_memberQueueDetails - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueSetAsideDetails;              //@synthesize memberQueueSetAsideDetails=_memberQueueSetAsideDetails - In the implementation block
@property (nonatomic,copy) NSDictionary * details; 
@property (nonatomic,copy) NSDictionary * setAsideDetails; 
+(id)sharedConfiguration;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isProvisionallyEnrolled;
-(void)refreshDetailsFromDisk;
-(void)setMemberQueueDetails:(NSDictionary *)arg1 ;
-(void)setMemberQueueSetAsideDetails:(NSDictionary *)arg1 ;
-(NSDictionary *)memberQueueDetails;
-(NSDictionary *)memberQueueSetAsideDetails;
-(id)provisionalEnrollmentExpirationDate;
-(NSDictionary *)setAsideDetails;
-(void)setSetAsideDetails:(NSDictionary *)arg1 ;
-(BOOL)isTeslaEnrolled;
-(BOOL)isAwaitingConfiguration;
-(id)diagnosticsUploadURL;
-(id)languageScript;
-(id)tvProviderUserToken;
-(int)userMode;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSDictionary *)details;
-(BOOL)isSupervised;
-(id)init;
-(id)region;
-(id)language;
@end

