/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightServices/PRSAnonymousPipelineManager.h>

@class PARSession;

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager {

	PARSession* _session;

}

@property (nonatomic,retain) PARSession * session;              //@synthesize session=_session - In the implementation block
+(id)sharedManager;
-(void)sendCustomFeedback:(id)arg1 ;
-(void)setFeedbackDelegate:(id)arg1 ;
-(void)setPARSession:(id)arg1 ;
-(id)init;
-(PARSession *)session;
-(void)setSession:(PARSession *)arg1 ;
@end

