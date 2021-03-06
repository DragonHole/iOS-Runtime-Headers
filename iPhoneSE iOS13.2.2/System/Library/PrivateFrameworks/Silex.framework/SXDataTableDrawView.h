/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface SXDataTableDrawView : UIView {

	NSMutableArray* _drawBlocks;

}

@property (nonatomic,retain) NSMutableArray * drawBlocks;              //@synthesize drawBlocks=_drawBlocks - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGPoint)originOffset;
-(NSMutableArray *)drawBlocks;
-(void)setDrawBlocks:(NSMutableArray *)arg1 ;
@end

