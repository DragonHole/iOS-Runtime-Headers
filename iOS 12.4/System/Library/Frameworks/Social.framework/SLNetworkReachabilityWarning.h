/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SLNetworkReachabilityWarning : NSObject {

	/*^block*/id _completionHandler;
	NSString* _serviceType;

}
-(void)showIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)showIfNecessary;
-(id)initWithServiceType:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

