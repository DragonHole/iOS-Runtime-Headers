/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapServiceWalletMerchantTicket.h>

@protocol GEOMapServiceTicket;
@class NSString;

@interface _mkMapServiceWalletMerchantTicket : NSObject <MKMapServiceWalletMerchantTicket> {

	id<GEOMapServiceTicket> _ticket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(void)submitWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)cancel;
@end
