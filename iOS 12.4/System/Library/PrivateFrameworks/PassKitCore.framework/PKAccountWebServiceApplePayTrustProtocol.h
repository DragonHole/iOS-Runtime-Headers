/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PKApplePayTrustHashResponse, NSURL, NSData;


@protocol PKAccountWebServiceApplePayTrustProtocol <NSObject>
@property (nonatomic,retain) PKApplePayTrustHashResponse * hashResponse; 
@property (nonatomic,retain) NSURL * baseURL; 
@property (nonatomic,copy) NSData * publicKeyHash; 
@required
-(void)setBaseURL:(id)arg1;
-(Class)signatureResponseClass;
-(id)endpointComponents;
-(PKApplePayTrustHashResponse *)hashResponse;
-(void)setHashResponse:(id)arg1;
-(id)manifestHashWithReferenceIdentifier:(id)arg1;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(id)arg1;
-(NSURL *)baseURL;

@end
