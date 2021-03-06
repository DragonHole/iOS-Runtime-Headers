/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/SXReachabilityProvider.h>

@class FCNetworkReachability, NSHashTable, NSString;

@interface NUReachabilityProvider : NSObject <FCNetworkReachabilityObserving, SXReachabilityProvider> {

	FCNetworkReachability* _networkReachability;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) FCNetworkReachability * networkReachability;              //@synthesize networkReachability=_networkReachability - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                  //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNetworkReachable;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)addReachabilityObserver:(id)arg1 ;
-(void)removeReachabilityObserver:(id)arg1 ;
-(FCNetworkReachability *)networkReachability;
-(id)initWithNetworkReachability:(id)arg1 ;
-(NSHashTable *)observers;
@end

