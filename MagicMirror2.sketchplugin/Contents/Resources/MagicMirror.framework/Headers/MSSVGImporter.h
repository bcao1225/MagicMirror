//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSImporter.h"

@class NSString, SVGImporter;

@interface MSSVGImporter : NSObject <MSImporter>
{
    SVGImporter *_importer;
    id _graph;
}

+ (id)svgImporter;

- (void)finishImporting;
- (id)firstPhaseSubtitle;
@property(retain, nonatomic) id graph; // @synthesize graph=_graph;
- (id)importAsLayer;
- (void)importIntoGroup:(id)arg1 name:(id)arg2 images:(id)arg3 progress:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) SVGImporter *importer; // @synthesize importer=_importer;
- (unsigned long long)prepareToImportFromData:(id)arg1;
- (unsigned long long)prepareToImportFromURL:(id)arg1;
- (id)secondPhaseSubtitleForValue:(long long)arg1 maximum:(long long)arg2;
- (BOOL)shouldCollapseSinglePage;
- (BOOL)shouldExpandPages;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

