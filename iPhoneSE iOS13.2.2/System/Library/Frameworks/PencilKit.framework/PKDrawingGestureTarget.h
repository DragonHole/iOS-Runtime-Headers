/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKDrawingGestureTarget <NSObject>
@optional
-(BOOL)drawingShouldBegin:(id)arg1 withEvent:(id)arg2;

@required
-(void)drawingBegan:(id)arg1;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2;
-(void)drawingEnded:(id)arg1;
-(void)drawingCancelled;
-(void)drawingEstimatedPropertiesUpdated:(id)arg1;

@end
