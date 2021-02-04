/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, NSArray;

@interface SLSheetImagePreviewView : UIView {

	UIImage* _image;
	UIImageView* _imageView;
	NSArray* _principalAttachments;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSArray * principalAttachments;              //@synthesize principalAttachments=_principalAttachments - In the implementation block
+(id)fallbackPreviewImage;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(NSArray *)principalAttachments;
-(void)setPrincipalAttachments:(NSArray *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setImageView:(UIImageView *)arg1 ;
@end
