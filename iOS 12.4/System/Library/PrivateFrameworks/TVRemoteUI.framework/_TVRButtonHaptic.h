/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIFeedbackGeneratorUserInteractionDriven;
@interface _TVRButtonHaptic : NSObject {

	id<UIFeedbackGeneratorUserInteractionDriven> _behavior;

}

@property (nonatomic,retain) id<UIFeedbackGeneratorUserInteractionDriven> behavior;              //@synthesize behavior=_behavior - In the implementation block
+(id)hapticForView:(id)arg1 ;
-(void)userInteractionBegan;
-(void)userInteractionEnded;
-(void)userInteractionCancelled;
-(void)setBehavior:(id<UIFeedbackGeneratorUserInteractionDriven>)arg1 ;
-(id<UIFeedbackGeneratorUserInteractionDriven>)behavior;
@end

