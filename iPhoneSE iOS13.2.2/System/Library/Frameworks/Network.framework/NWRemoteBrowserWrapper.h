/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NWBrowser;

@interface NWRemoteBrowserWrapper : NSObject {

	NSUUID* _clientID;
	NWBrowser* _browser;

}

@property (retain) NSUUID * clientID;                //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWBrowser * browser;              //@synthesize browser=_browser - In the implementation block
-(void)setClientID:(NSUUID *)arg1 ;
-(NSUUID *)clientID;
-(NWBrowser *)browser;
-(void)setBrowser:(NWBrowser *)arg1 ;
@end

