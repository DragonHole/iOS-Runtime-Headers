/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MSMessageComposeExtensionImplProtocol;
@interface _MSExtensionGlobalState : NSObject {

	id<_MSMessageComposeExtensionImplProtocol> _activeExtensionContext;

}

@property (nonatomic,retain) id<_MSMessageComposeExtensionImplProtocol> activeExtensionContext;              //@synthesize activeExtensionContext=_activeExtensionContext - In the implementation block
+(id)sharedInstance;
-(void)setActiveExtensionContext:(id<_MSMessageComposeExtensionImplProtocol>)arg1 ;
-(id<_MSMessageComposeExtensionImplProtocol>)activeExtensionContext;
@end
