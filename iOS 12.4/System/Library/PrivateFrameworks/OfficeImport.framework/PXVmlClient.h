/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OAVReadClient.h>

@interface PXVmlClient : NSObject <OAVReadClient>
+(void)readClientDataFromShape:(xmlNode*)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(int)vmlSupportLevel;
+(id)colorWithRecolorInfoColorString:(id)arg1 ;
@end

