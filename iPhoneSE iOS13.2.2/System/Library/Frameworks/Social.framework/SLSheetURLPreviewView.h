/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIImage, SLURLPreviewGenerator, UIView, UIImageView;

@interface SLSheetURLPreviewView : SLSheetImagePreviewView {

	UIImage* _shadowImage;
	SLURLPreviewGenerator* _webPreviewGenerator;
	UIView* _placeholderPreviewView;
	UIImageView* _placeholderGlyphView;

}
-(id)init;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)_generateAutomaticPreviewForURL:(id)arg1 ;
@end

