/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class NSArray, LPImageViewStyle, NSMutableArray;

@interface LPMultipleImageView : LPComponentView {

	NSArray* _images;
	LPImageViewStyle* _style;
	NSMutableArray* _imageViews;

}
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutComponentView;
-(CGSize)_availableSizeForImageNumber:(unsigned long long)arg1 withLayout:(unsigned long long)arg2 withinSize:(CGSize)arg3 ;
-(CGRect)_computeRectForImageAtIndex:(unsigned long long)arg1 fittingSize:(CGSize*)arg2 width:(double*)arg3 height:(double*)arg4 size:(CGSize)arg5 multipleImageLayout:(unsigned long long)arg6 ;
-(CGSize)_layoutImagesForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(id)initWithImages:(id)arg1 style:(id)arg2 ;
-(void)componentViewDidMoveToWindow;
@end

