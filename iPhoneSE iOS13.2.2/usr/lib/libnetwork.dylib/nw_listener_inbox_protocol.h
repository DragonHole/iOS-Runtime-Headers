/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/nw_listener_inbox.h>

@interface nw_listener_inbox_protocol : nw_listener_inbox {

	nw_listen_protocol_callbacks* _listen_callbacks;
	nw_listen_protocol* _listen_protocol;

}
-(id)description;
-(BOOL)cancel;
-(id)initWithProtocol:(nw_protocol*)arg1 delegate:(id)arg2 ;
@end

