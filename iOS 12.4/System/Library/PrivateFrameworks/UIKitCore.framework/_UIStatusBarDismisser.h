/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIStatusBarDismisser : NSObject {

	BOOL _enabled;
	/*^block*/id _dismissBlock;

}

@property (nonatomic,copy) id dismissBlock;                              //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)invalidate;
-(id)initWithStatusBar:(id)arg1 ;
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
@end
