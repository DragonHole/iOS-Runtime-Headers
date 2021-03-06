/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPeerPaymentWebServiceArchiver.h>

@class NPKCompanionAgentConnection, NSString;

@interface NPKSharedPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver> {

	NPKCompanionAgentConnection* _connection;

}

@property (nonatomic,retain) NPKCompanionAgentConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)archiveContext:(id)arg1 ;
-(id)initWithCompanionAgentConnection:(id)arg1 ;
-(NPKCompanionAgentConnection *)connection;
-(void)setConnection:(NPKCompanionAgentConnection *)arg1 ;
@end

