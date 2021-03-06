/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray;

@interface PMPosterContainerView : UIView {

	NSArray* _images;
	NSArray* _imageViews;

}

@property (nonatomic,retain) NSArray * imageViews;              //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) NSArray * images;                  //@synthesize images=_images - In the implementation block
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
@end

