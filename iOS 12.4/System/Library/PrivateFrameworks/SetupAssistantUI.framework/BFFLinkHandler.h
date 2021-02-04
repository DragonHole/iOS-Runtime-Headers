/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIButton;

@interface BFFLinkHandler : NSObject {

	UIButton* _button;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id handler;                       //@synthesize handler=_handler - In the implementation block
-(id)init;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
@end
