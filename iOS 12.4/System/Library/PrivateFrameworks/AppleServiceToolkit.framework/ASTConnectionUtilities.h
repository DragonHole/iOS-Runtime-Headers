/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASTConnectionUtilities : NSObject
+(BOOL)isGzipEnabled;
+(BOOL)isValidResponse:(id)arg1 ;
+(BOOL)didEncounterNetworkDisconnectionError:(id)arg1 ;
+(BOOL)trustIsValidWithProtectionSpace:(id)arg1 rootOfTrust:(unsigned long long)arg2 ;
+(id)MD5HeaderValueForTask:(id)arg1 ;
+(BOOL)relaxTimeouts;
+(id)getServerLoggingSelection;
+(BOOL)useChunkedTransferEncoding;
+(unsigned long long)allowCellularSizeThreshold;
@end

