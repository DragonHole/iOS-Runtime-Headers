/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXMVisionEngineNodeConnectionDelegate <NSObject>
@required
-(void)triggerWithSource:(id)arg1 context:(id)arg2;
-(BOOL)engineWillAcceptTiggerWithSource:(id)arg1;
-(void)captureSessionNodeDidBeginProcessingFrames:(id)arg1;
-(void)captureSessionNodeDidEndProcessingFrames:(id)arg1;
-(void)captureSessionNodeWillProcessFrame:(id)arg1;
-(void)captureSessionNodeDidDropFrame:(id)arg1;

@end

