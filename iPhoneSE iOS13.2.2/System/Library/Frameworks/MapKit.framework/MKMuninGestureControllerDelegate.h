/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMuninGestureControllerDelegate <NSObject>
@required
-(void)muninGestureControllerDidStartUserInteraction:(id)arg1;
-(void)muninGestureControllerDidStopUserInteraction:(id)arg1;
-(void)muninGestureController:(id)arg1 didTapLabelMarker:(id)arg2;
-(void)muninGestureController:(id)arg1 didTapAtPoint:(CGPoint)arg2 areaAvailable:(BOOL)arg3;
-(void)muninGestureController:(id)arg1 didZoomWithDirection:(long long)arg2 type:(long long)arg3;
-(void)muninGestureControllerDidPan:(id)arg1;

@end
