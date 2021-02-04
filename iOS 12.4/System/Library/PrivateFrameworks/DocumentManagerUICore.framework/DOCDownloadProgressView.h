/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class DOCDownloadCircleView;

@interface DOCDownloadProgressView : UIView {

	double _progress;
	double _filledLineWidth;
	double _emptyLineWidth;
	double _startAngle;
	double _endAngle;
	DOCDownloadCircleView* _emptyLineCircleView;
	DOCDownloadCircleView* _filledLineCircleView;

}

@property (assign,nonatomic) double startAngle;                                                //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                                                  //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic,__weak) DOCDownloadCircleView * emptyLineCircleView;               //@synthesize emptyLineCircleView=_emptyLineCircleView - In the implementation block
@property (assign,nonatomic,__weak) DOCDownloadCircleView * filledLineCircleView;              //@synthesize filledLineCircleView=_filledLineCircleView - In the implementation block
@property (assign,nonatomic) double progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double filledLineWidth;                                           //@synthesize filledLineWidth=_filledLineWidth - In the implementation block
@property (assign,nonatomic) double emptyLineWidth;                                            //@synthesize emptyLineWidth=_emptyLineWidth - In the implementation block
-(void)setEndAngle:(double)arg1 ;
-(double)endAngle;
-(void)setupCircleProgressView;
-(void)setEmptyLineCircleView:(DOCDownloadCircleView *)arg1 ;
-(void)setFilledLineCircleView:(DOCDownloadCircleView *)arg1 ;
-(void)setEmptyLineWidth:(double)arg1 ;
-(void)setFilledLineWidth:(double)arg1 ;
-(DOCDownloadCircleView *)filledLineCircleView;
-(DOCDownloadCircleView *)emptyLineCircleView;
-(double)filledLineWidth;
-(double)emptyLineWidth;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setProgress:(double)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(double)progress;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
@end
