/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BusinessChat/BusinessChat-Structs.h>
@interface BCCertificatUtilities : NSObject
+(BOOL)trustIncludesRevokedCertificate:(SecTrustRef)arg1 ;
+(SecPolicyRef)sslPolicyForHost:(id)arg1 client:(BOOL)arg2 ;
+(SecTrustRef)trustReferenceWithCertificates:(id)arg1 forPolicy:(SecPolicyRef)arg2 ;
@end

