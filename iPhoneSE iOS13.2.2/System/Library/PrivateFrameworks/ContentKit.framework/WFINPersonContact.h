/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContact.h>

@class INPerson;

@interface WFINPersonContact : WFContact {

	INPerson* _person;

}

@property (nonatomic,retain) INPerson * person;              //@synthesize person=_person - In the implementation block
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)contactWithPerson:(id)arg1 ;
-(id)initWithINPerson:(id)arg1 ;
-(INPerson *)person;
-(void)setPerson:(INPerson *)arg1 ;
-(id)wfName;
-(id)wfSerializedRepresentation;
-(id)inPerson;
@end

