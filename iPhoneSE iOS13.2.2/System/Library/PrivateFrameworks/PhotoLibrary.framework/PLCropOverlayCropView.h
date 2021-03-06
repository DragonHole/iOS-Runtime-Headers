/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PLCropOverlayCropView : UIView {

	CGRect _cropRect;
	UIView* _aboveCropView;
	UIView* _cropRectView;
	UIView* _belowCropView;

}
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)_updateCropRectIfNeeded;
-(void)_removeCropViews;
@end

