/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_dispatch_data;
@class NSObject;

@interface NWConcrete_nw_custom_endpoint : NWConcrete_nw_endpoint {

	NSObject*<OS_dispatch_data> data;
	/*^block*/id resolver_block;
	unsigned type;

}
-(unsigned)type;
-(id)copyDictionary;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(id)initWithType:(unsigned)arg1 resolver:(/*^block*/id)arg2 data:(id)arg3 ;
@end

