/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLKComplicationDataSource;
@class NTKComplicationDataSource, CLKComplication;

@interface NTKTimelineDataOperation : NSObject {

	NTKComplicationDataSource* _localDataSource;
	id<CLKComplicationDataSource> _remoteDataSource;
	CLKComplication* _remoteComplication;
	BOOL _started;
	BOOL _canceled;

}

@property (nonatomic,readonly) BOOL started;               //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
+(id)operationWithLocalDataSource:(id)arg1 ;
+(id)operationWithRemoteDataSource:(id)arg1 complication:(id)arg2 ;
-(BOOL)canceled;
-(BOOL)_validateEntry:(id)arg1 ;
-(id)_finalizedValidEntries:(id)arg1 ;
-(void)cancel;
-(void)start;
-(void)_start;
-(void)_cancel;
-(BOOL)started;
@end
