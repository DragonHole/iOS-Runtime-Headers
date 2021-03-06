/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDragFeedbackGenerator.h>

@class _UIDragSnappingFeedbackGeneratorConfiguration;

@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (getter=_dragSnappingConfiguration,nonatomic,readonly) _UIDragSnappingFeedbackGeneratorConfiguration * dragSnappingConfiguration; 
+(Class)_configurationClass;
-(void)userInteractionStarted;
-(void)userInteractionEnded;
-(void)objectSnapped;
-(void)draggedObjectLifted;
-(void)draggedObjectLanded;
-(void)_stopLanding;
-(void)_startLanding;
-(id)_dragSnappingConfiguration;
@end

