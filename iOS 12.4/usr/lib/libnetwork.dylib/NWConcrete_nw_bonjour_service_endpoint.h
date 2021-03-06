/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@interface NWConcrete_nw_bonjour_service_endpoint : NWConcrete_nw_endpoint {

	char* service_name;
	char* service_type;
	char* service_domain;
	char* service_composite;

}
-(id)copyDictionary;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)domainForPolicy;
-(id)initWithName:(const char*)arg1 type:(const char*)arg2 domain:(const char*)arg3 ;
-(void)dealloc;
-(unsigned)type;
@end

