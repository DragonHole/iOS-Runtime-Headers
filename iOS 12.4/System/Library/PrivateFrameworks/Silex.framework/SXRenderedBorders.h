/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface SXRenderedBorders : NSObject {

	UIImage* _top;
	UIImage* _bottom;
	UIImage* _left;
	UIImage* _right;

}

@property (nonatomic,retain) UIImage * top;                 //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) UIImage * bottom;              //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) UIImage * left;                //@synthesize left=_left - In the implementation block
@property (nonatomic,retain) UIImage * right;               //@synthesize right=_right - In the implementation block
-(UIImage *)left;
-(UIImage *)top;
-(UIImage *)right;
-(UIImage *)bottom;
-(void)setTop:(UIImage *)arg1 ;
-(void)setRight:(UIImage *)arg1 ;
-(void)setBottom:(UIImage *)arg1 ;
-(void)setLeft:(UIImage *)arg1 ;
@end

