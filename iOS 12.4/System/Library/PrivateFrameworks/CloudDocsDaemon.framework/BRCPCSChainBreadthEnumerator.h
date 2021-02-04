/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class BRCPCSChainInfo;

@interface BRCPCSChainBreadthEnumerator : NSEnumerator {

	BRCPCSChainInfo* _chainInfo;
	PQLResultSet* _enumerator;

}
-(id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2 ;
-(id)chainInfo;
-(void)dealloc;
-(id)nextObject;
@end
