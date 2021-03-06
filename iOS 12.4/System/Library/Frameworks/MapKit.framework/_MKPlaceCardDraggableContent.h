/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIItemProviderWriting;
@class UIView;

@interface _MKPlaceCardDraggableContent : NSObject {

	BOOL _header;
	int _analyticsTarget;
	UIView* _view;
	id<UIItemProviderWriting> _draggableContent;

}

@property (nonatomic,retain) UIView * view;                                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<UIItemProviderWriting> draggableContent;              //@synthesize draggableContent=_draggableContent - In the implementation block
@property (assign,getter=isHeader,nonatomic) BOOL header;                             //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) int analyticsTarget;                                     //@synthesize analyticsTarget=_analyticsTarget - In the implementation block
-(id<UIItemProviderWriting>)draggableContent;
-(void)setAnalyticsTarget:(int)arg1 ;
-(void)setDraggableContent:(id<UIItemProviderWriting>)arg1 ;
-(int)analyticsTarget;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(BOOL)isHeader;
-(void)setHeader:(BOOL)arg1 ;
@end

