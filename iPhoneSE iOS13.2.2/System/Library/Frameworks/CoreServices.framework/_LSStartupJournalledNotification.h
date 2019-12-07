/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _LSStartupJournalledNotification : NSObject {

	BOOL _plugins;
	int _notification;
	NSArray* _proxies;

}

@property (nonatomic,readonly) int notification;               //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) NSArray * proxies;              //@synthesize proxies=_proxies - In the implementation block
@property (nonatomic,readonly) BOOL plugins;                   //@synthesize plugins=_plugins - In the implementation block
-(id)initWithNotification:(int)arg1 appProxies:(id)arg2 plugins:(BOOL)arg3 ;
-(int)notification;
-(NSArray *)proxies;
-(BOOL)plugins;
@end
