/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSURLHostNameAddressInfo : NSObject {

	double timestamp;
	addrinfo* addressInfo;

}
+(id)addressInfoForHost:(id)arg1 ;
+(void)asyncResolveWithCallbackClient:(id)arg1 ;
-(void)dealloc;
-(double)_timestamp;
-(id)_initWithAddressInfo:(addrinfo*)arg1 ;
-(addrinfo*)addrinfo;
@end

