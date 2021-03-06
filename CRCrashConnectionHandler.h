/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/CRConnectionHandler.h>

@class NSString, CRCrashArchive;

@interface CRCrashConnectionHandler : CRConnectionHandler {

	NSString* _path;
	CRCrashArchive* _crashArchive;

}

@property (retain) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (retain) CRCrashArchive * crashArchive;              //@synthesize crashArchive=_crashArchive - In the implementation block
-(id)initWithCritterDelegate:(id)arg1 andCrashArchive:(id)arg2 andReportPath:(id)arg3 ;
-(void)handleResponse:(long long)arg1 andData:(id)arg2 ;
-(CRCrashArchive *)crashArchive;
-(void)setCrashArchive:(CRCrashArchive *)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)handleError:(id)arg1 ;
@end

