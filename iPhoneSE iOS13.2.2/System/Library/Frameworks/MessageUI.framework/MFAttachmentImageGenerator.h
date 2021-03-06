/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIImage;

@interface MFAttachmentImageGenerator : UIView {

	CGSize _textSize;
	NSString* _displayString;
	UIImage* _image;
	double _maxImageHeight;

}
+(double)defaultHeight;
+(id)pngDataForAttachment:(id)arg1 ;
+(id)imageForAttachment:(id)arg1 ;
+(CGRect)imageRectForAttachment:(id)arg1 ;
-(id)image;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(CGRect)imageRect;
-(id)pngData;
@end

