/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class UIImage;

@interface MFComposeSendAccessoryButton : UIButton {

	UIImage* _sendImage;

}

@property (nonatomic,retain) UIImage * sendImage;              //@synthesize sendImage=_sendImage - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImage *)sendImage;
-(void)_setupSendImage:(BOOL)arg1 ;
-(void)setSendImage:(UIImage *)arg1 ;
@end

