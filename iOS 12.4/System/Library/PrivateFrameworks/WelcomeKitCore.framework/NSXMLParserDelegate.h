/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSXMLParserDelegate <NSObject>
@optional
-(void)parserDidStartDocument:(id)arg1;
-(void)parserDidEndDocument:(id)arg1;
-(void)parser:(id)arg1 foundNotationDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4;
-(void)parser:(id)arg1 foundUnparsedEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4 notationName:(id)arg5;
-(void)parser:(id)arg1 foundAttributeDeclarationWithName:(id)arg2 forElement:(id)arg3 type:(id)arg4 defaultValue:(id)arg5;
-(void)parser:(id)arg1 foundElementDeclarationWithName:(id)arg2 model:(id)arg3;
-(void)parser:(id)arg1 foundInternalEntityDeclarationWithName:(id)arg2 value:(id)arg3;
-(void)parser:(id)arg1 foundExternalEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
-(void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;
-(void)parser:(id)arg1 didEndMappingPrefix:(id)arg2;
-(void)parser:(id)arg1 foundCharacters:(id)arg2;
-(void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2;
-(void)parser:(id)arg1 foundProcessingInstructionWithTarget:(id)arg2 data:(id)arg3;
-(void)parser:(id)arg1 foundComment:(id)arg2;
-(void)parser:(id)arg1 foundCDATA:(id)arg2;
-(id)parser:(id)arg1 resolveExternalEntityName:(id)arg2 systemID:(id)arg3;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2;

@end

