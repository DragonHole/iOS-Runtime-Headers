/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SAML/SAML-Structs.h>
@interface XMLWrapperQuery : NSObject
+(void)initialize;
-(void)registerNamespace:(id)arg1 ;
-(id)executeXpathQuery:(xmlDoc*)arg1 query:(id)arg2 ctxNode:(xmlNode*)arg3 error:(id*)arg4 ;
-(BOOL)registerXpathNamespacesForCtx:(xmlXPathContext*)arg1 error:(id*)arg2 ;
-(id)elementForNode:(xmlNode*)arg1 ;
-(id)searchNodeWithXpathQuery:(xmlNode*)arg1 query:(id)arg2 error:(id*)arg3 ;
@end

