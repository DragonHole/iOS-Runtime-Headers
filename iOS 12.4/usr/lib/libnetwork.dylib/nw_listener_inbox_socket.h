/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/nw_listener_inbox.h>

@interface nw_listener_inbox_socket : nw_listener_inbox {

	void* _source;
	int _sockfd_for_logging_only_do_not_close_or_use;
	unsigned char _ipProtocol;

}
-(id)initWithSocket:(int)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(id)description;
-(BOOL)cancel;
@end
