/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString;

@interface MFConversationItemRoundButton : UIButton {

	NSString* _imageName;

}

@property (nonatomic,copy) NSString * imageName;              //@synthesize imageName=_imageName - In the implementation block
-(void)update;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)_setImage;
@end

