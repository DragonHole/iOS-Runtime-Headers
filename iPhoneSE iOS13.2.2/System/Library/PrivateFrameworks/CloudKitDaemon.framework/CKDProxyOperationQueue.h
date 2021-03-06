/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@class CKDClientProxy;

@interface CKDProxyOperationQueue : NSOperationQueue {

	CKDClientProxy* _proxy;

}

@property (assign,nonatomic,__weak) CKDClientProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(void)addOperation:(id)arg1 ;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(CKDClientProxy *)proxy;
-(id)initWithProxy:(id)arg1 ;
@end

