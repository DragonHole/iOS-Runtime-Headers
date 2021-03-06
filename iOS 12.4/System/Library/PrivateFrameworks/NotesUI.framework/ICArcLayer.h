/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICCircleLayer.h>

@interface ICArcLayer : ICCircleLayer {

	BOOL _drawClockwise;
	double _startAngle;
	double _endAngle;

}

@property (assign,nonatomic) double startAngle;               //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                 //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) BOOL drawClockwise;              //@synthesize drawClockwise=_drawClockwise - In the implementation block
-(void)setEndAngle:(double)arg1 ;
-(double)endAngle;
-(BOOL)drawClockwise;
-(void)setDrawClockwise:(BOOL)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
@end

