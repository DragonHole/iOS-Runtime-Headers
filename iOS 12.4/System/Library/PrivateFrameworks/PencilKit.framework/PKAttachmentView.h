/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKDrawing, NSMutableArray, UIView;

@interface PKAttachmentView : UIView {

	BOOL _contentHidden;
	PKDrawing* _drawing;
	NSMutableArray* _tiles;
	UIView* _tileContainerView;

}

@property (nonatomic,copy) PKDrawing * drawing;                       //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tiles;                //@synthesize tiles=_tiles - In the implementation block
@property (nonatomic,retain) UIView * tileContainerView;              //@synthesize tileContainerView=_tileContainerView - In the implementation block
@property (nonatomic,readonly) UIView * tileMaskView; 
@property (nonatomic,readonly) BOOL isAtEndOfDocument; 
@property (assign,nonatomic) BOOL contentHidden;                      //@synthesize contentHidden=_contentHidden - In the implementation block
@property (nonatomic,readonly) double drawingScale; 
-(PKDrawing *)drawing;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(void)fingerDrawingEnabledDidChange;
-(void)drawingWillBegin;
-(BOOL)isAtEndOfDocument;
-(void)drawingDidChange;
-(double)drawingScale;
-(void)updateDrawingHeight:(double)arg1 ;
-(void)updateFrameForTextContainer;
-(UIView *)tileContainerView;
-(BOOL)hitByTouchLocation:(CGPoint)arg1 bounds:(CGRect)arg2 ;
-(BOOL)hitChrome:(CGPoint)arg1 isStylus:(BOOL)arg2 ;
-(UIView *)tileMaskView;
-(void)updateTileContainerViewFrame;
-(id)initWithFrame:(CGRect)arg1 drawing:(id)arg2 ;
-(void)setTileContainerView:(UIView *)arg1 ;
-(BOOL)contentHidden;
-(NSMutableArray *)tiles;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentHidden:(BOOL)arg1 ;
@end
