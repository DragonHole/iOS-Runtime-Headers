/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject;

@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject {

	NSObject*<OS_dispatch_data> _remainingData;
	/*^block*/id _completion;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)drain:(CFWriteStreamRef)arg1 ;
-(void)callCompletion;
@end

