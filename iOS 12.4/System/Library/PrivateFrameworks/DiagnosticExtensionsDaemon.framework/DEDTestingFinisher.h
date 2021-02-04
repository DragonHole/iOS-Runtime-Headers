/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDFinisher.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSString;

@interface DEDTestingFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(BOOL)supportsSecureCoding;
+(id)log;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2 ;
-(id)flattenDirectories:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
