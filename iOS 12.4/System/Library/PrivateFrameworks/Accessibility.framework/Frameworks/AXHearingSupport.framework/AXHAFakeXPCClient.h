/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHAXPCClient.h>

@interface AXHAFakeXPCClient : AXHAXPCClient {

	/*^block*/id _updateBlock;

}
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1 ;
-(void)registerMessageBlock:(/*^block*/id)arg1 ;
@end

